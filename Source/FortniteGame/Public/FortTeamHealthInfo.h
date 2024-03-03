#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "PrivateTeamDataArray.h"
#include "FortTeamHealthInfo.generated.h"

class AFortTeamInfo;
class UFortPlayerHealthInfoComponent;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortTeamHealthInfo : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, Transient, meta=(AllowPrivateAccess=true))
    UFortPlayerHealthInfoComponent* OwnerHealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortTeamInfo* FortTeamInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RepDataReplicated, meta=(AllowPrivateAccess=true))
    FPrivateTeamDataArray RepData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 TeamNum;
    
public:
    AFortTeamHealthInfo();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_RepDataReplicated();
    
};

