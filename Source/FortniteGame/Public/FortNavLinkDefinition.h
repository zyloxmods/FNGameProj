#pragma once
#include "CoreMinimal.h"
#include "AI/Navigation/NavLinkDefinition.h"
#include "EBuildingFloorRailing.h"
#include "EBuildingStairsRailing.h"
#include "EFortNavLinkPattern.h"
#include "FortNavLinkPattern.h"
#include "FortNavLinkDefinition.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortNavLinkDefinition : public UNavLinkDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortNavLinkPattern Pattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortNavLinkPattern> AdditionalPatterns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EBuildingStairsRailing::Type>> StairsRailing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBuildingFloorRailing FloorRailing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortNavLinkPattern::Type> PatternType;
    
    UFortNavLinkDefinition();
};

