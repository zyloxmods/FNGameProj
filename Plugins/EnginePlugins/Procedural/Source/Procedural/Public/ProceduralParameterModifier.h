#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EProceduralParameterModifierBlendMode.h"
#include "ProceduralParameterModifier.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UProceduralParameterModifier : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Contribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EProceduralParameterModifierBlendMode BlendMode;
    
    UProceduralParameterModifier();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetContribution() const;
    
};

