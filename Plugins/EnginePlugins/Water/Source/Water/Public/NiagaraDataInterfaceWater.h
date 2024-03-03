#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NiagaraDataInterfaceWater.generated.h"

class AWaterBody;

UCLASS(Blueprintable, EditInlineNew)
class WATER_API UNiagaraDataInterfaceWater : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWaterBody* SourceBody;
    
public:
    UNiagaraDataInterfaceWater();
};

