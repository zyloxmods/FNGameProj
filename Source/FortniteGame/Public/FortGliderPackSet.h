#pragma once
#include "CoreMinimal.h"
#include "FortAttributeFuelInterface.h"
#include "FortAttributeSet.h"
#include "FortGameplayAttributeData.h"
#include "FortGliderPackSet.generated.h"

UCLASS(Blueprintable)
class UFortGliderPackSet : public UFortAttributeSet, public IFortAttributeFuelInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData MaxCharges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData CurrentCharges;
    
    UFortGliderPackSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    
    // Fix for true pure virtual functions not being implemented
};

