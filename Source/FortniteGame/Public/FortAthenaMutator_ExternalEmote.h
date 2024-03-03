#pragma once
#include "CoreMinimal.h"
#include "ExternalEmoteCategory.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_ExternalEmote.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortAthenaMutator_ExternalEmote : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FExternalEmoteCategory> GlobalEmotes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FExternalEmoteCategory> DynamicEmotes;
    
public:
    AFortAthenaMutator_ExternalEmote();
};

