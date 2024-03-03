#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "PostGameScreenTagClassPair.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct FPostGameScreenTagClassPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ScreenType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> PostGameScreenClass;
    
    FORTNITEGAME_API FPostGameScreenTagClassPair();
};

