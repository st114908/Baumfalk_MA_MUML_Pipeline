	/**
 * @file 
 * @author generated by Fraunhofer IEM
 * @brief Specification of Component of Type: DriveController
 * @details This files contains a description of the DriveController in form of the DriveControllerComponent
 * 			and all methods which can be executed on an Instance of this Component
 */
		#ifndef DRIVECONTROLLERCOMPONENT_Interface_H_
		#define DRIVECONTROLLERCOMPONENT_Interface_H_

#include "clock.h"
#ifdef __cplusplus
  extern "C" {
#endif		// Library
	#include "standardTypes.h"
	#include "customTypes.h"
	#include "port.h"
	#include "Debug.h"
			/*****
 			 *
 			 *  Forward Delcaration of Container Functions
 			 *
 			 */		
			
					bool_T MCC_DriveControllerComponent_velocity_recv_value(Port* p, int16_T* value);
					bool_T MCC_DriveControllerComponent_velocity_exists_value(Port* p);
					bool_T MCC_DriveControllerComponent_angle_recv_value(Port* p, int8_T* value);
					bool_T MCC_DriveControllerComponent_angle_exists_value(Port* p);
			
			
	
			/*****
 			 *
 			 *  Component Functions
 			 *
 			 */
			/**
			 * @file 
			 * @author generated by Fraunhofer IEM 
			 * @brief Specification of Component of Type: DriveController
			 * @details This files contains a description of the DriveController in form of the DriveControllerComponent
			 * 			and all methods which can be executed on an Instance of this Component
			 */
				
						/**
						 * @brief Forward Declaration of the struct DriveControllerComponent
						 */
							typedef struct DriveControllerComponent DriveControllerComponent;
						
						/**
						*  
						* @brief Description for a ComponentInstance of Type: DriveController
						* @details This struct describes a specific Component Instances which is typed over the Component: DriveController
						*/
						struct DriveControllerComponent {
						
								uint8_T ID;	
						
						
							
										Port velocityPort; /**< A  Component's Port: velocity */
										Port anglePort; /**< A  Component's Port: angle */
										Clock velocityPortClock; /**< A  Hybrid/ Continuous Port's Clock: velocityPortClock */
										Clock anglePortClock; /**< A  Hybrid/ Continuous Port's Clock: anglePortClock */
								
									void (*velocityPortAccessFunction) (int16_T*); /**access function pointer for continuous port */
									/*FIXME: Add InitFunction and Destory Funcion */
									void (*anglePortAccessFunction) (int8_T*); /**access function pointer for continuous port */
									/*FIXME: Add InitFunction and Destory Funcion */
						
									int16_T velocity; /*A Ports Data Variable*/
									int8_T angle; /*A Ports Data Variable*/
								
								
						
								DriveControllerComponent * next;/**< A Pointer to the next component part, if this component ist part of a multipart in the CIC */
								
							};
					
						/**
						* @brief This Methodes intializes the Component: DriveController
						* @details All struct members of the struct DriveControllerComponent are initialized
						* 
						* @param component The DriveControllerComponent to be initialized
						*/	
							void DriveControllerComponent_initialize(DriveControllerComponent* component);
				
						/**
						* @brief Creates a Instance of the Component: DriveController
						* @details Allocates Memory for the struct DriveControllerComponent
						* @return A Pointer to the new created DriveControllerComponent
						*/
							DriveControllerComponent DriveControllerComponent_create();
				
						/**
						 * @brief Destroys a Component: DriveController
						 * @details Frees the Memory for the struct DriveControllerComponent
						 * 
						* @param component The specific DriveControllerComponent to be destroyed
						 */
							void DriveControllerComponent_destroy(DriveControllerComponent* component);
						
						/**
						* @brief Executes the next Step of the behavior an Instance of the Component: DriveController
						* @details The behavior of the Component:  DriveController is executed.
						*			
						* @param component The DriveControllerComponent whose behavior shall be checked
						*/
							void DriveControllerComponent_processStep(DriveControllerComponent* component);
				
			
			
			
			
						/*Getter and Setter for Sending Values of Hybrid/Continuous ports*/
								bool_T getterOf_velocity(Port* velocityPort, int16_T* velocity);/**< A Pointer to the getter function of the port: velocity */
								bool_T getterOf_angle(Port* anglePort, int8_T* angle);/**< A Pointer to the getter function of the port: angle */
					
						
		

	





#include "clock.h"
#ifdef __cplusplus
  }
#endif
		#endif /* DRIVECONTROLLERCOMPONENT_Interface_H_ */
