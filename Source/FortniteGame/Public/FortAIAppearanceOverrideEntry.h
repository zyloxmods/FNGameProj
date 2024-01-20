#pragma once
#include "CoreMinimal.h"
#include "FortAIAppearanceOverrideEntry.generated.h"

class UFortFeedbackBank;
class USkeletalMesh;

USTRUCT(BlueprintType)
struct FFortAIAppearanceOverrideEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AppearanceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFemale;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortFeedbackBank> FeedbackBank;
    
public:
    FORTNITEGAME_API FFortAIAppearanceOverrideEntry();
};

