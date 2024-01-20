#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "FortConnectionData.h"
#include "BuildingConnectivityEffect.generated.h"

UCLASS(Blueprintable)
class ABuildingConnectivityEffect : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortConnectionData ConnectionData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDraw;
    
public:
    ABuildingConnectivityEffect();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisconnect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnConnect(const FTransform& T1, const FTransform& T2);
    
};

