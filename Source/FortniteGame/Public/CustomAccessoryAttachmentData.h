#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "CustomAccessoryAttachmentData.generated.h"

/** Asset to specify re-usable accessory attachment data */
UCLASS(Blueprintable)
class FORTNITEGAME_API UCustomAccessoryAttachmentData : public UDataAsset {
    GENERATED_BODY()
public:
    UCustomAccessoryAttachmentData();
private:
    /** Override of relative scale of accessory skeletal mesh component for males for medium-size bodies (i.e. soldiers) */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Attachment")
    FVector MaleRelativeScale;

    /** Override of relative scale of accessory skeletal mesh component for females for medium-size bodies (i.e. soldiers)*/
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Attachment")
    FVector FemaleRelativeScale;

    /** Override of relative scale of accessory skeletal mesh component for males for small-size bodies (i.e. ninjas, outlanders)*/
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Attachment")
    FVector SmallMaleRelativeScale;

    /** Override of relative scale of accessory skeletal mesh component for females for small-size bodies (i.e. ninjas, outlanders) */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Attachment")
    FVector SmallFemaleRelativeScale;

    /** Override of relative scale of accessory skeletal mesh component for males for large-size bodies (i.e. constructors) */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Attachment")
    FVector LargeMaleRelativeScale;

    /** Override of relative scale of accessory skeletal mesh component for females for large-size bodies (i.e. constructors) */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Attachment")
    FVector LargeFemaleRelativeScale;
};
