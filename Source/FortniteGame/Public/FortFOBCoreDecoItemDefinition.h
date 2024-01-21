#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortDecoItemDefinition.h"
#include "FortFOBCoreDecoItemDefinition.generated.h"

UCLASS(Blueprintable)
class UFortFOBCoreDecoItemDefinition : public UFortDecoItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ExtendedDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FlavorText;
    
protected:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid SaveFilenameGUID;
    
public:
    UFortFOBCoreDecoItemDefinition();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaximumHealth() const;
    
};

