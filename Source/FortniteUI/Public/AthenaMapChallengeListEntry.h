#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "Blueprint/IUserListEntry.h"
#include "AthenaMapChallengeListEntry.generated.h"

class UAthenaChallengeListEntry_Challenge;
class UAthenaMapNavigableIconSingleChallenge;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaMapChallengeListEntry : public UCommonUserWidget, public IUserListEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaMapNavigableIconSingleChallenge* IconWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaChallengeListEntry_Challenge* ChallengeListEntry;
    
public:
    UAthenaMapChallengeListEntry();
    
    // Fix for true pure virtual functions not being implemented
};

