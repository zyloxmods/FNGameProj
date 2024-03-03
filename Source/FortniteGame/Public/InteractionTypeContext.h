#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "InteractionType.h"
#include "TInteractionType.h"
#include "InteractionTypeContext.generated.h"

UCLASS(Blueprintable)
class UInteractionTypeContext : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractionType InteractionType;
    
public:
    UInteractionTypeContext();
    
};

