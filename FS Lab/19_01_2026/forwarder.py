import asyncio
from telethon import TelegramClient, events

api_id = 30885486     # your api_id
api_hash = "fd7ce3eb50808d994705aa45f110f0b2"  # your api_hash

SOURCE = -5281668427       # source group ID
DESTINATION = -5196171017  # destination group ID

async def main():
    async with TelegramClient("forwarder_session", api_id, api_hash) as client:

        @client.on(events.NewMessage(chats=SOURCE))
        async def handler(event):
            try:
                # forward as a new message (no "forwarded from" tag)
                await client.send_message(
                    DESTINATION,
                    event.message
                )
                await asyncio.sleep(1)  # flood safety
            except Exception as e:
                print("Error:", e)

        print("Forwarder running...")
        await client.run_until_disconnected()

asyncio.run(main())
