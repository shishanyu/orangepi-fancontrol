# Fan Control for Orange Pi Zero
Fan control that works with Orange Pi Zero and Arduino-like platforms, produces software PWM, requires compatible WiringPi lib.

I have a 4 pin fan, that I recycled from an old iBook computer. The red pin goes to 5V, black pin to ground, green is PWM and yellow is the sensor (which I haven't gotten it to work yet).

This outputs software PWM through a pin of your choosing. The program accepts the parameter of a text file with only an integer as content (no newline characters or white spaces). Suggested run in OrangePi:

`sudo ./fancontrol /sys/class/thermal/thermal_zone1/temp `

You can compile this with something like:

`gcc -Wall -o fancontrol fancontrol.c -lwiringPi`

*Note: not all commits and stuff will be in english but I'll try to translate the most important bits.*

# Control de ventilador para Orange Pi Zero
Un control de ventilador que funciona con la Orange Pi Zero y plataformas parecidas a Arduino, produce PWM con software, requiere la librera Wiring Pi.

Tengo un ventilador de 4 pines, que reciclé de una iBook vieja. El pin rojo va a 5V, el negro a tierra, el verde es PWM y el amarillo es el sensor (que no he logrado que funcione aun).

Esto saca un PWM hecho por software a traves del pin que elijas. El programa acepta el parámetro de un archivo de texto con un integer como contenido (sin enter ni nada). Sugerido correr en la OrangePi así: 

`sudo ./fancontrol /sys/class/thermal/thermal_zone1/temp `

Lo puedes compilar con algo como:

`gcc -Wall -o fancontrol fancontrol.c -lwiringPi`
