#pragma once
#include "CoreMinimal.h"
#include "NiagaraComponent.h"
#include "FortCurieWorldNiagaraComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortCurieWorldNiagaraComponent : public UNiagaraComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 AssociatedControllerId;
    
public:
    UFortCurieWorldNiagaraComponent();
};

