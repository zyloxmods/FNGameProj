#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "LatentRepTeamDataArray.h"
#include "PrivateTeamDataArray.h"
#include "FortTeamPrivateInfo.generated.h"

class AFortTeamInfo;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortTeamPrivateInfo : public AInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortTeamInfo* TeamInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RepData, meta=(AllowPrivateAccess=true))
    FPrivateTeamDataArray RepData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FLatentRepTeamDataArray LatentTeamRepData;
    
    UPROPERTY(EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint16 AverageDamageDealt;
    
public:
    AFortTeamPrivateInfo();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_RepData();
    
};

