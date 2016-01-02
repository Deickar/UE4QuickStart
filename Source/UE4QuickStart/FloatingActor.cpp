// UE4 C++ Quick Start Tutorials - copyright 2015-2016 Sébastien Rombauts - distributed under the MIT License

#include "UE4QuickStart.h"
#include "FloatingActor.h"


// Sets default values
AFloatingActor::AFloatingActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	UE_LOG(QuickStart, Log, TEXT("AFloatingActor::AFloatingActor()"));
}

// Called when the game starts or when spawned
void AFloatingActor::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(QuickStart, Log, TEXT("AFloatingActor::BeginPlay()"));
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "AFloatingActor::BeginPlay()");
}

// Called every frame
void AFloatingActor::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

	float DeltaHeight = (FMath::Sin(RunningTime + DeltaTime) - FMath::Sin(RunningTime));
	RunningTime += DeltaTime;

	FVector NewLocation = GetActorLocation();
	NewLocation.Z += DeltaHeight * ScaleHeightZ; // Scale our height (by a factor of 20 by default)
	SetActorLocation(NewLocation);
}

