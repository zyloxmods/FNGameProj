#pragma once
#include "CoreMinimal.h"
#include "EFortCollectionBookState.h"
#include "FortCollectionBookSectionState.generated.h"

USTRUCT(BlueprintType)
struct FFortCollectionBookSectionState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Section;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortCollectionBookState State;
    
    FORTNITEGAME_API FFortCollectionBookSectionState();
};

