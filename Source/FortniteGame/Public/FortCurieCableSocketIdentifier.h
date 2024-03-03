#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortCurieCableSocketIdentifier.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortCurieCableSocketIdentifier {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
public:
    FFortCurieCableSocketIdentifier();
};

