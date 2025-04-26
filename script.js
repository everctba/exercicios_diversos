// Futuro código JavaScript aqui
console.log("Script carregado!");

document.addEventListener('DOMContentLoaded', () => {
   const cards = document.querySelectorAll('.card');
   const container = document.querySelector('.references-grid');

   cards.forEach(card => {
      let isDragging = false;
      let startX, startY;
      let initialCardX, initialCardY;

      card.addEventListener('mousedown', (e) => {
         // Prevenir drag padrão de imagens/texto se houver dentro do card
         e.preventDefault();

         isDragging = true;
         card.classList.add('dragging');

         // Posição inicial do mouse na página
         startX = e.clientX;
         startY = e.clientY;

         // Posição atual do card (relativa ao container)
         // getComputedStyle garante que pegamos o valor atual, mesmo que definido em %
         // mas como vamos definir em px, offsetLeft/Top é mais direto
         initialCardX = card.offsetLeft;
         initialCardY = card.offsetTop;

         // Adicionar listeners no documento para capturar movimento fora do card
         document.addEventListener('mousemove', onMouseMove);
         document.addEventListener('mouseup', onMouseUp);
         document.addEventListener('mouseleave', onMouseLeave); // Lidar com mouse saindo da janela
      });

      function onMouseMove(e) {
         if (!isDragging) return;

         // Calcular deslocamento do mouse
         const deltaX = e.clientX - startX;
         const deltaY = e.clientY - startY;

         // Calcular nova posição do card
         let newCardX = initialCardX + deltaX;
         let newCardY = initialCardY + deltaY;

         // --- Opcional: Limitar o arraste dentro do container --- 
         const containerRect = container.getBoundingClientRect();
         const cardRect = card.getBoundingClientRect();

         // Calcula limites relativos ao container
         const minX = 0;
         const minY = 0;
         const maxX = container.offsetWidth - card.offsetWidth;
         const maxY = container.offsetHeight - card.offsetHeight;

         newCardX = Math.max(minX, Math.min(newCardX, maxX));
         newCardY = Math.max(minY, Math.min(newCardY, maxY));
         // --- Fim da limitação opcional --- 

         // Aplicar nova posição em pixels
         card.style.left = `${newCardX}px`;
         card.style.top = `${newCardY}px`;
      }

      function onMouseUp() {
         if (!isDragging) return;
         stopDragging();
      }

      function onMouseLeave() {
         if (!isDragging) return;
         // Se o mouse sair da janela enquanto arrasta, paramos também
         // Poderia ter comportamento diferente, como continuar se voltar
         stopDragging();
      }

      function stopDragging() {
         isDragging = false;
         card.classList.remove('dragging');

         // Remover listeners do documento
         document.removeEventListener('mousemove', onMouseMove);
         document.removeEventListener('mouseup', onMouseUp);
         document.removeEventListener('mouseleave', onMouseLeave);
      }
   });
});

// --- Função de Export --- 
document.addEventListener('DOMContentLoaded', () => {
   const exportButton = document.getElementById('export-button');
   if (!exportButton) return;

   exportButton.addEventListener('click', async () => {
      console.log('Export button clicked. Preparing files...');

      // --- 1. Preparar HTML Modificado --- 
      const currentHtml = document.documentElement.cloneNode(true);
      const cardsInClone = currentHtml.querySelectorAll('.card');
      const liveCards = document.querySelectorAll('.card');

      // Aplicar posições finais como inline style
      liveCards.forEach((liveCard, index) => {
         if (cardsInClone[index]) {
            const topPos = liveCard.style.top || `${liveCard.offsetTop}px`; // Pegar estilo ou offset
            const leftPos = liveCard.style.left || `${liveCard.offsetLeft}px`; // Pegar estilo ou offset

            // Define o estilo inline no clone
            // Importante: Mantém position: absolute
            cardsInClone[index].style.cssText =
               `position: absolute; top: ${topPos}; left: ${leftPos}; width: ${liveCard.style.width || '30%'}; height: ${liveCard.style.height || '45%'};`;
            // Remover a classe 'dragging' se existir no clone (não deve, mas por segurança)
            cardsInClone[index].classList.remove('dragging');
            cardsInClone[index].style.cursor = 'default'; // Reset cursor
         }
      });

      // Remover o script original do clone
      const scriptTagInClone = currentHtml.querySelector('script[src="script.js"]');
      if (scriptTagInClone) {
         scriptTagInClone.remove();
      }

      // Remover o botão de export do clone
      const exportButtonInClone = currentHtml.querySelector('#export-button');
      if (exportButtonInClone) {
         exportButtonInClone.remove();
      }

      // Opcional: Adicionar um script vazio ou diferente se necessário
      // const emptyScript = document.createElement('script');

      const modifiedHtmlString = "<!DOCTYPE html>\n" + currentHtml.outerHTML;

      // --- 2. Obter CSS --- 
      // Isso precisa ser feito buscando o arquivo ou copiando o conteúdo.
      // No ambiente real, você faria um fetch ou teria o conteúdo.
      let cssContent = '';
      try {
         // Tentativa de buscar (pode falhar dependendo do ambiente)
         const response = await fetch('style.css');
         if (response.ok) {
            cssContent = await response.text();
            console.log('CSS fetched successfully.');
         } else {
            console.warn('Could not fetch style.css directly. You need to include its content manually in the ZIP.');
            cssContent = `/* --- Cole o conteúdo completo do style.css aqui --- */\n\n/* Exemplo: */\nbody { background-color: #1a1a1a; color: #f0f0f0; } \n/* ... etc ... */`;
         }
      } catch (error) {
         console.warn('Error fetching style.css:', error, '\nYou need to include its content manually in the ZIP.');
         cssContent = `/* --- Cole o conteúdo completo do style.css aqui --- */\n\n/* Exemplo: */\nbody { background-color: #1a1a1a; color: #f0f0f0; } \n/* ... etc ... */`;
      }

      // --- 3. Preparar JS Vazio --- 
      const emptyJsContent = '// Drag and drop functionality removed for export.';

      // --- 4. Usar JSZip (Exemplo - REQUER INCLUIR A BIBLIOTECA JSZip) --- 
      console.log("--- Conteúdo para o ZIP (Simulação) ---");
      console.log("index.html:", modifiedHtmlString.substring(0, 500) + '...'); // Mostrar início
      console.log("style.css:", cssContent.substring(0, 500) + '...'); // Mostrar início
      console.log("script.js:", emptyJsContent);

      alert("Conteúdo preparado! Verifique o console. Para criar o ZIP, adicione a biblioteca JSZip e use o código de exemplo comentado no scriptjs");

      // /* -> REMOVENDO COMENTÁRIO INICIAL
      // --- CÓDIGO DE EXEMPLO PARA USAR COM A BIBLIOTECA JSZip --- 
      // PASSO 1: Inclua a biblioteca JSZip no seu HTML
      // <script src="https://cdnjs.cloudflare.com/ajax/libs/jszip/3.10.1/jszip.min.js"></script>

      // PASSO 2: Descomente e use este código no listener do botão

      if (typeof JSZip === 'undefined') {
         alert('JSZip library not found. Please include it in your HTML.');
         return;
      }

      const zip = new JSZip();

      // Adicionar arquivos ao ZIP
      zip.file("index.html", modifiedHtmlString);
      zip.file("style.css", cssContent);
      zip.file("script.js", emptyJsContent);

      // Gerar o ZIP e iniciar o download
      zip.generateAsync({ type: "blob" })
         .then(function (content) {
            // Criar link temporário para download
            const link = document.createElement('a');
            link.href = URL.createObjectURL(content);
            link.download = "exported_website.zip";
            document.body.appendChild(link);
            link.click();
            document.body.removeChild(link);
            URL.revokeObjectURL(link.href); // Liberar memória
            console.log('ZIP file generated and download initiated.');
         })
         .catch(function (error) {
            console.error('Error generating ZIP:', error);
            alert('Error generating ZIP file. See console for details.');
         });
      // */ -> REMOVENDO COMENTÁRIO FINAL

   });
}); 