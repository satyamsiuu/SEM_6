import asyncio
from telethon import TelegramClient

api_id = 30885486     # <-- your api_id
api_hash = "fd7ce3eb50808d994705aa45f110f0b2"  # <-- your api_hash

async def main():
    async with TelegramClient("id_session", api_id, api_hash) as client:
        async for dialog in client.iter_dialogs():
            if dialog.is_group:
                print(f"{dialog.name}  -->  {dialog.id}")

asyncio.run(main())
