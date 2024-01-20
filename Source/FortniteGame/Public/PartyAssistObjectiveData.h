#pragma once
#include "CoreMinimal.h"
#include "PartyAssistObjectiveData.generated.h"

USTRUCT(BlueprintType)
struct FPartyAssistObjectiveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BackendName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCompleted;
    
    FORTNITEGAME_API FPartyAssistObjectiveData();
};

