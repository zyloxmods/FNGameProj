#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "ActiveRealEstatePlotInfo.h"
#include "FortCreativeRealEstatePlotManager.generated.h"

UCLASS(Blueprintable)
class AFortCreativeRealEstatePlotManager : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FActiveRealEstatePlotInfo> ActiveCreativeRealEstatePlots;
    
public:
    AFortCreativeRealEstatePlotManager();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

