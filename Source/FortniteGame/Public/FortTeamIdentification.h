#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "FortTeamIdentification.generated.h"

class UCustomAccessoryColorSwatch;

UCLASS(Abstract, Blueprintable, CollapseCategories, Const, MinimalAPI)
class UFortTeamIdentification : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor HUDColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCustomAccessoryColorSwatch* CharacterAccessoryColorSwatch;
    
    UFortTeamIdentification();
};

