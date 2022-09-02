import json
import os

for filename in os.listdir():
    if filename.endswith('.ipynb'):
        with open(filename) as file:
            file_info = json.load(file)
            file_text = ''
            for cell in file_info['cells']:
                file_text += ''.join(cell['source'])
                file_text += '\n\n'

            with open(filename.replace('ipynb', 'py'), 'w+') as py_file:
                py_file.write(file_text)
            os.remove(filename)
