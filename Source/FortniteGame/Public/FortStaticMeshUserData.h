#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "TransformableNavLinkClass.h"
#include "FortStaticMeshUserData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEGAME_API UFortStaticMeshUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransformableNavLinkClass> NavLinks;
    
    UFortStaticMeshUserData();
};

