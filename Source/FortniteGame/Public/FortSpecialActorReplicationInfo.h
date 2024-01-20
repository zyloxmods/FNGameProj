#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "SpecialActorRepDataArray.h"
#include "SpecialActorStatData.h"
#include "FortSpecialActorReplicationInfo.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortSpecialActorReplicationInfo : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FSpecialActorRepDataArray SpecialActorRepList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpecialActorStatData> SpecialActorStats;
    
    AFortSpecialActorReplicationInfo();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

