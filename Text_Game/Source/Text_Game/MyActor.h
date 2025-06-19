

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class TEXT_GAME_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	
	AMyActor();

protected:
	
	virtual void BeginPlay() override;

public:	
	
	virtual void Tick(float DeltaTime) override;


private:
	FVector2D CurrentPosition;
	int32 Step();
	void Move();
};
