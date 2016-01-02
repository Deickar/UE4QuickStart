// UE4 C++ Quick Start Tutorials - copyright 2015-2016 Sébastien Rombauts - distributed under the MIT License

#pragma once

#include "GameFramework/Actor.h"
#include "FloatingActor.generated.h"

UCLASS()
class UE4QUICKSTART_API AFloatingActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFloatingActor();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

private:
	UPROPERTY(EditAnywhere)
	float ScaleHeightZ = 20.0f;

	float RunningTime = 0.0f;
};
