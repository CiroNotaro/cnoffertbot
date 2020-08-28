import telepot
import sys, time
from pprint import pprint

def send(i,msg):
    bot.sendMessage(i, msg)


def on_chat_message(msg):
    content_type, chat_type, i = telepot.glance(msg)
    if content_type == 'text':
        txt = msg['text']
        if '/start' in txt:
            send(i, "Sono pronto! Digita un comando.")
        elif '/help' in txt:
            send(i,"Puoi usare:\n/help  Ti mostra una lista dei comandi.\n/cerca    Per iniziare a cercare.\n/info   Per informazioni sul bot.\n/clear o /c     Per pulire la chat.")
        elif '/info' in txt:
            send(i,"Creato da Ciro Notaro.")
        elif '/cerca' in txt:
            send(i,"Scrivi cosa vuoi cercare...")
            send(i, txt)
        elif '/clear' or '/c' in txt:
            bot.deleteMessage(i)
        else:
            send(i,"Non ho capito... Usa /help per una lista dei comandi.")


bot = telepot.Bot("1208361811:AAH7dU6RMygPvMmEZA8RmfY9sF4-GVBzEv0")
bot.message_loop(on_chat_message)

while 1:
    time.sleep(3)
