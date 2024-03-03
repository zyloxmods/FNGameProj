#pragma once
#include "CoreMinimal.h"
#include "VariantParticleSystemInitializerData.h"
#include "VariantTypeBase.h"
#include "VariantTypeInitialParticleSystemData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UVariantTypeInitialParticleSystemData : public UVariantTypeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVariantParticleSystemInitializerData> VariantInitialParticleSystemData;
    
    UVariantTypeInitialParticleSystemData();
};

