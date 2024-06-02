from pytube import YouTube
from sys import argv

#Seleciona se é audio se false é video
baixa_audio_mp3 = True

# PAssa URL AQUI EM ABIXO
url = 'https://www.youtube.com/watch?v=CtnX1EJHbC0&ab_channel=allaboutSteveJobs.com'



if (baixa_audio_mp3 == True) :
   print("só audio")
   my_video = YouTube(url)


   yt = YouTube(url)

   print ("Title: ", yt.title)

   print ("View: ", yt.views)
   my_video = my_video.streams.get_highest_resolution()
   
   # my_video = my_video.streams.filter(only_audio=True)
   #  # yt.streams.filter(only_audio=True)
   # [<Stream: itag="140" mime_type="audio/mp4" abr="128kbps" acodec="mp4a.40.2" progressive="False" type="audio">,
   # <Stream: itag="249" mime_type="audio/webm" abr="50kbps" acodec="opus" progressive="False" type="audio">,
   # <Stream: itag="250" mime_type="audio/webm" abr="70kbps" acodec="opus" progressive="False" type="audio">,
   # <Stream: itag="251" mime_type="audio/webm" abr="160kbps" acodec="opus" progressive="False" type="audio">]

   # stream = yt.streams.get_by_itag(251)
   # stream.download("H:/videosss")
   
   my_video.download("H:/videosss")
   print ("--------------------- ")
   print ("--------------------- ")
   print ("Download Finalizado: ")
   
   # stream = yt.streams.get_by_itag(22)
   # >>> stream.download()