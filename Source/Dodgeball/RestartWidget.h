// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "RestartWidget.generated.h"

/**
 * 
 */
UCLASS()
class DODGEBALL_API URestartWidget : public UUserWidget
{
	GENERATED_BODY()


		UPROPERTY(meta = (BindWidget, OptionalWidget = true))
		UButton* RestartButton;

protected:
	UFUNCTION()
		void OnRestartClicked();

	virtual void NativeOnInitialized() override;
};
