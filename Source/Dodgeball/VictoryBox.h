// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "VictoryBox.generated.h"

UCLASS()
class DODGEBALL_API AVictoryBox : public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	AVictoryBox();

	UFUNCTION()
	void OnBeginOverlap(UPrimitiveComponent* OverLappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = victoryBox, meta = (AllowPrivateAccess = "true"))
		USceneComponent* RootScene;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = victoryBox, meta = (AllowPrivateAccess = "true"))
		UBoxComponent* CollisionBox;
};
