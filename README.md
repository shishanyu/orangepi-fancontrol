# Fan Control for Orange Pi Zero
Fan control that works with Orange Pi Zero and Arduino-like platforms, produces software PWM, requires compatible WiringPi lib.

This outputs software PWM through a pin of your choosing. Also the program accepts the parameter of temperature, which right now it sets the PWM to one of 4 settings: 

- very low (<= 32)
- low ( <= 45 && > 32)
- mid (> 45 && < 60)
- high (anything else)


I have a 4 pin fan, that I recycled from an old iBook computer. The red pin goes to 5V, black pin to ground, yellow is PWM and green is the sensor (which I haven't gotten it to work yet).

Note: not all commits and stuff will be in english but I'll try to translate the most important bits.

# Control de ventilador para Orange Pi Zero
Un control de ventilador que funciona con la Orange Pi Zero y plataformas parecidas a Arduino, produce PWM con software, requiere la librera Wiring Pi.

Esto saca un PWM hecho por software a traves del pin que elijas. Tambien el programa acepta parametros de temperatura que en este momento pone el PWM a uno de 4 funciones:

- muy bajo (<= 32)
- bajo ( <= 45 && > 32)
- medio (> 45 && < 60)
- alto (todo lo demas)


