#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "DetailClassEntry.generated.h"

class UAthenaChallengeSetBaseDetails;

USTRUCT(BlueprintType)
struct FDetailClassEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag IdentifierTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAthenaChallengeSetBaseDetails> DetailsWidgetClass;
    
    FORTNITEUI_API FDetailClassEntry();
};

