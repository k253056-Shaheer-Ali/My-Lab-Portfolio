//Tech Support Diagonostic System

#include <stdio.h>

int main(){
	int device_type;
	int symptom;
	
	printf("Enter Device Type (1.Laptop , 2.Smartphone , 3.Router): \n");
	scanf("%d", &device_type);
	
	switch(device_type){
		case 1: 	
			printf("Enter Symptom Code (10,11,12): \n");
	        scanf("%d", &symptom);
        	switch(symptom){
        		case 10: printf("Won't turn on\n");
        		         printf("Additional advice: Check power adapter and battery connections. Try a different power outlet. Remove battery and hold power button for 30 seconds. ");
        			break;
        		case 11: printf("Overheating\n");
        		         printf("Additional advice: Clean fans and ensure proper ventilation. Check for dust accumulation. Use a cooling pad. Monitor CPU usage.");
        			break;
        		case 12: printf("Slow performance\n");
        		         printf("Additional advice: Run system diagnostics and check resource usage. Scan for malware. Upgrade RAM if necessary. Defragment hard drive.");
        			break;
			}
	    break;
	        
		case 2:
		    printf("\nEnter Symptom Code (20,21,22): \n");
	        scanf("%d", &symptom);
		    switch(symptom){
        		case 20: printf("Battery drains fast\n");
        		         printf("Additional advice: Run battery calibration tool and check for background apps. Reduce screen brightness. Disable unnecessary connectivity features.");
        			break;
        		case 21: printf("No signal\n");
        		         printf("Additional advice: Check SIM card and networksettings. Toggle airplanemode. Update carrier settings. Check for network outages.");
        			break;
        		case 22: printf("Touchscreen unresponsive\n");
        		         printf("Additional advice: Perform screen calibration test. Clean screen surface. Restart device. Check for software updates.");
        			break;
        	}
		break;
			
        case 3:
        	printf("\nEnter Symptom Codeb (30,31,32): \n");
	        scanf("%d", &symptom);
        	switch(symptom){
        		case 30: printf("No internet connection\n");
        		         printf("Additional advice: Check ISP status and router cables. Restart modem and router. Check WAN connection settings. Verify internet subscription.");
        			break;
        		case 31: printf("Wi-Fi signal weak\n");
        		         printf("Additional advice: Reposition router and check antenna connections. Reduce interference from other devices. Change Wi-Fi channel. Consider range extender.");
        			break;
        		case 32: printf("Device can't connect\n");
        		         printf("Additional advice: Check MAC filtering and DHCP settings. Verify Wi-Fi password. Restart connecting device. Check for IP conflicts.");
        			break;
        	}
        break;
        
        default:
        break;
        
	}
	
	return 0;
}
