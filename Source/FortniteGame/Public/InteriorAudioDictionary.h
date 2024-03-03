#pragma once
#include "CoreMinimal.h"
#include "InteriorAudioDictionaryEntry.h"
#include "InteriorAudioDictionary.generated.h"

USTRUCT(BlueprintType)
struct FInteriorAudioDictionary {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInteriorAudioDictionaryEntry> Entries;
    
    FORTNITEGAME_API FInteriorAudioDictionary();
};

