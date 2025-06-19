


#include "MyActor.h"
#include "Math/UnrealMathUtility.h"


AMyActor::AMyActor()
{
 	
    PrimaryActorTick.bCanEverTick = false;
	CurrentPosition = FVector2D(0, 0);
}


void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	Move();
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

int AMyActor::Step()
{
	return FMath::RandRange(0, 1);
}

void AMyActor::Move()
{
	UE_LOG(LogTemp, Warning, TEXT("STRRT position: (%d, %d)"),
		static_cast<int32>(CurrentPosition.X),
		static_cast<int32>(CurrentPosition.Y));

	for (int i = 0; i < 10; ++i)
	{
		int32 dx = Step();
		int32 dy = Step();
		CurrentPosition.X += dx;
		CurrentPosition.Y += dy;

		UE_LOG(LogTemp, Warning, TEXT("position: (%d, %d)"),
			i + 1,
			static_cast<int32>(CurrentPosition.X),
			static_cast<int32>(CurrentPosition.Y));
	}
}