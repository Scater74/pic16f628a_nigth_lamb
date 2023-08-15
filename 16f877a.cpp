
#include <16f877a.h>
#use delay(clock=4000000)
#fuses HS,NOWDT,NOPUT,NOLVP,NOCPD,NOPROTECT,NODEBUG,NOBROWNOUT,NOWRT
#use fast_io(b)

#define ldr pin_a1


void main()
{
   setup_psp(PSP_DISABLED);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DISABLED,0,1);
   setup_adc_ports(NO_ANALOGS);
   setup_adc(ADC_OFF);
   setup_CCP1(CCP_OFF);
   setup_CCP2(CCP_OFF);
   set_tris_b(0x00); 
   set_tris_a(0x02);
   output_b(0x00); 

   while(true){
      if(input(ldr)){
         
         delay_ms(500);
         output_low(pin_b0);
      
      }else{
         delay_ms(500);
         output_high(pin_b0);
         
      
      }
     
   }





}
