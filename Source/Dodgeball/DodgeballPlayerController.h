// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HUDWidget.h"
#include "RestartWidget.h"
#include "GameFramework/PlayerController.h"
#include "DodgeballPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class DODGEBALL_API ADodgeballPlayerController : public APlayerController
{
	GENERATED_BODY() 

public:
	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<URestartWidget> BP_RestartWidget;

	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<UHUDWidget> BP_HUDWidget;
private:
	UPROPERTY()
		URestartWidget* RestartWidget;
	UPROPERTY()
		UHUDWidget* HUDWidget;

protected:
	virtual void BeginPlay() override;

public:
	void UpdateHealthPercent(float HealthPercent);
	void ShowRestartWidget();
	void HideRestartWidget();
};
