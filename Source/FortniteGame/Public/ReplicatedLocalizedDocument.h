#pragma once
#include "CoreMinimal.h"
#include "ReplicatedTranslatedStrings.h"
#include "ReplicatedLocalizedDocument.generated.h"

USTRUCT(BlueprintType)
struct FReplicatedLocalizedDocument {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SourceLang;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FReplicatedTranslatedStrings> Strings;
    
    FORTNITEGAME_API FReplicatedLocalizedDocument();
};

