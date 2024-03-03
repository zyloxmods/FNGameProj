#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_BlockEmotes.generated.h"

UCLASS(Blueprintable, Config=Game)
class AFortAthenaMutator_BlockEmotes : public AFortAthenaMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGlobalEmoteBlock;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> SpecificEmotesToBlock;
    
    AFortAthenaMutator_BlockEmotes();
};

