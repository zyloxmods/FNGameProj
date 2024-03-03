#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "PropertyOverrideDataRepl.h"
#include "FortPropertyOverrideReplShared.generated.h"

UCLASS(Blueprintable)
class AFortPropertyOverrideReplShared : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReplOverrides, meta=(AllowPrivateAccess=true))
    FPropertyOverrideDataRepl ReplOverrides;
    
    AFortPropertyOverrideReplShared();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplOverrides();
    
};

