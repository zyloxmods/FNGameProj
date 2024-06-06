#pragma once
#include "CoreMinimal.h"
#include "EItemProfileType.h"
#include "FortAccountItemDefinition.h"
#include "FortItemAccessTokenType.generated.h"

class UFortItemDefinition;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortItemAccessTokenType : public UFortAccountItemDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemProfileType ProfileType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItemDefinition* access_item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText UnlockDescription;
    
public:
    UFortItemAccessTokenType(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetUnlockDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortItemDefinition* GetAccessItem() const;
    
};

