#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BuildingConnectivityManager.generated.h"

class ABuildingSMActor;

UCLASS(Blueprintable)
class FORTNITEGAME_API ABuildingConnectivityManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABuildingSMActor*> ConnectivityActors;
    
public:
    ABuildingConnectivityManager();
};

