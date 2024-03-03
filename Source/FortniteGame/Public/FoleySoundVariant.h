#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FoleySoundVariant.generated.h"

class UFoleySoundLibrary;

USTRUCT(BlueprintType)
struct FFoleySoundVariant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UFoleySoundLibrary>> LibrariesToAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UFoleySoundLibrary>> LibrariesToRemove;
    
    FORTNITEGAME_API FFoleySoundVariant();
};

