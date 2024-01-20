#pragma once
#include "CoreMinimal.h"
#include "FortWeap_BuildingToolBase.h"
#include "FortWeap_EditingTool.generated.h"

class ABuildingSMActor;

UCLASS(Blueprintable)
class AFortWeap_EditingTool : public AFortWeap_BuildingToolBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_EditActor, meta=(AllowPrivateAccess=true))
    ABuildingSMActor* EditActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEditConfirmed;
    
public:
    AFortWeap_EditingTool();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_EditActor();
    
};

