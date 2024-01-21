#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EAssignmentType.h"
#include "EFortTeam.h"
#include "FortAIAssignmentIdentifier.generated.h"

USTRUCT(BlueprintType)
struct FFortAIAssignmentIdentifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAssignmentType AssignmentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AssignmentGameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortTeam::Type> AssignmentTeam;
    
    FORTNITEGAME_API FFortAIAssignmentIdentifier();
};

