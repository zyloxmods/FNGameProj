#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AthenaNavInvokerBox.generated.h"

class UNavigationInvokerComponent;

UCLASS(Blueprintable)
class AAthenaNavInvokerBox : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GenerationRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNavigationInvokerComponent* InvokerComp;
    
public:
    AAthenaNavInvokerBox();
    UFUNCTION(BlueprintCallable)
    void SetInvokerEnabled(bool bEnable);
    
};

