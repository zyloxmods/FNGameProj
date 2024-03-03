#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AthenaLTMTraversePoint.h"
#include "Templates/SubclassOf.h"
#include "ArgonTraversePoint.generated.h"

class AFortPlayerMarkerBase;

UCLASS(Blueprintable)
class AArgonTraversePoint : public AAthenaLTMTraversePoint {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerMarkerBase* MarkerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortPlayerMarkerBase> MarkerClass;
    
public:
    AArgonTraversePoint();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewState_Hidden_Server_BP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewState_Active_Server_BP();
    
    UFUNCTION(BlueprintCallable)
    void ClientSpawnMarkerActor(const FTransform& Transform);
    
};

