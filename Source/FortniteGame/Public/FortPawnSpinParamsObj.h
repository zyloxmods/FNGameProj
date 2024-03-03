#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortPawnSpinParams.h"
#include "FortPawnSpinParamsObj.generated.h"

class UFortPawnSpinParamsObj;

UCLASS(Blueprintable)
class UFortPawnSpinParamsObj : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bReplicatedFlag: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPawnSpinParams SpinParams;
    
    UFortPawnSpinParamsObj();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UFortPawnSpinParamsObj* BP_CreateFortPawnSpinParamsObjInstance(UObject* WorldContextObject);
    
};

