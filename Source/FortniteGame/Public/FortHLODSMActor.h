#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortStaticMeshActor.h"
#include "FortHLODSMActor.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortHLODSMActor : public AFortStaticMeshActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActorFName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector UniqueWorldLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDynamic;
    
    AFortHLODSMActor();
};

